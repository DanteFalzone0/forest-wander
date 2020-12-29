#include <iostream>
#include <string>
#include <djf-3d-2/djf-3d.h>


int main(int argc, char *argv[]) {
    std::string title("Claire's Electric Garden");
    const int width  = 971;
    const int height = 600;
    const int depth  = -1000;

    djf_3d::Canvas canvas(
        title,
        width,
        height,
        depth
    );

    djf_3d::Color pitch_black = {0, 0, 0, 0};
    djf_3d::Color cathode_ray_green = {0, 255, 50, 0};

    while (!canvas.exit()) {
        canvas.set_draw_color(pitch_black);
        canvas.fill_window();
        /* TODO plant trees */
    }

    return 0;
}
