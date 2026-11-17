#pragma once
class Grid2D{

    public:
        Grid2D(int width, int height, int resolution, int x_origin, int y_origin);

        void manageGrid(int x, int y);

        void resizeGrid(int x, int y);
        void addPoint(int x, int y, int value);

    private:
        int width;
        int height;
        float resolution;
        float x_pos;
        float y_pos;
        int collomns;
        int rows;
};
