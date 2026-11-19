#include <vector>
#include <cmath>
#include <utility>


class Grid2D{
    private:
    int width;
    int height;
    float resolution;
    float x_pos;
    float y_pos;
    int collomns;
    int rows;
    std::vector<std::vector<int>> grid;

    public:
    Grid2D(int width, int height, float resolution, float x_origin, float y_origin){
        this->width = width;
        this->height = height;
        this->resolution = resolution;
        this->x_pos = x_origin;
        this->y_pos = y_origin;
        collomns=width/resolution;
        rows = height/resolution;
        grid.resize(rows);
        for(auto& rows : grid){
            rows.resize(collomns,0);
        }
    }
    void manageGrid(int x, int y){
        if(!(x >=0 && x < collomns && y>=0 && y < rows)){
            resizeGrid(x,y);
        }
    }

    /**
     * addPoint is a function that takes in a x,y cordnate and a value, and saves the value in the specified grid cordnate
     * @param x is an intager value and represents the x cordnate
     * @param y is an intager value and represents the y cordnate
     * @param value is an intager value and represents the occupancy of a given square.
     */
    void addPoint(int x, int y, int value){
        int pointX = static_cast<int>((x - x_pos)/resolution);//collomn index
        int pointY = static_cast<int>((y - y_pos)/resolution);//row index

        manageGrid(pointX,pointY);
        grid[pointX][pointY] = value;
    }

    private:
    void resizeGrid(int x, int y){
        if(x < 0){
            for(auto& rows : grid){
                rows.insert(rows.begin(),collomns-x,0);
            }
            collomns += (collomns-x);
        }
        else if(x > collomns){
            for(auto& rows : grid){
                rows.resize(collomns + (x-collomns),0);
            }
            collomns += (x-collomns);
        }
        else if(y<0){
            grid.insert(grid.begin(),(rows-y), std::vector<int>(collomns,0));
            rows += (rows - y);
        }
        else{
            grid.resize((x-rows),std::vector<int>(collomns,0));
        }

    }
    /** just impliments breshians line algorithm to find all points in an occupacy grid 
     *  that a lidar scan has gone through
     * draw lines
     * @param x1 represents the x cordninate of the robots position
     * @param x2 represents the x cordninate of the point from lidar reading
     * @param y1 represents the y cordninate of the robots position
     * @param y2 epresents the y cordninate of the point from lidar reading
     * @returns returns a vector of vectors with size 2 first [0] is x position [1] is y position
    */
    std::vector<std::vector<int>> drawLine(int x1, int x2, int y1, int y2) {
        std::vector<std::vector<int>> pixels;

        int dx = std::abs(x2 - x1);
        int dy = std::abs(y2 - y1);
        int sx = (x1 > x2) ? -1 : 1;
        int sy = (y1 > y2) ? -1 : 1;

        int x = x1;
        int y = y1;

        if (dx >= dy) {
            int p = 2 * dy - dx;
            while (x != x2) {
                pixels.push_back({x, y});
                if (p >= 0) {
                    y += sy;
                    p -= 2 * dx;
                }
                x += sx;
                p += 2 * dy;
            }
        } else {
            int p = 2 * dx - dy;
            while (y != y2) {
                pixels.push_back({x, y});
                if (p >= 0) {
                    x += sx;
                    p -= 2 * dy;
                }
                y += sy;
                p += 2 * dx;
            }
        }

        pixels.push_back({x2, y2});
        return pixels;
    }
};