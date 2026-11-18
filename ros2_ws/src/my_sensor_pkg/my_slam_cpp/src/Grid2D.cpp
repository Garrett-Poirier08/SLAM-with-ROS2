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
    void drawLine(int x1,int x2, int y1, int y2){
        std::vector<std::vector<int>> pixels;

        int dy = std::abs(y2-y1);
        int dx = std::abs(x2-x1);
        int sx;
        int sy;

        if(x1>x2){sx = -1;}else{sx = 1;}
        if(y1>y2){sy = -1;}else{sy = 1;}

        if(sx>sy){ 
            int p = 2* dy - dx;
            int x = x1;
            int y = y1;
            while(x != x2){
                pixels.insert(pixels.end(),{x,y});
                if(p >=0){
                    x += sx;
                    p-= 2 * dx;
                }
                x += sx;
                p += 2 * dy;
            }
        }
        else{

        }
        



    }
};