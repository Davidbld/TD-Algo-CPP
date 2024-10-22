#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath> //fonction cubique

int main(int argc, char *argv[])
{
    double x[4] = {0.0000000003, 1.0000000003, 1.0000000003, 0.0000000003};
    double y[4] = {0.0000000003, 0.0000000003, 1.0000000003, 1.0000000003};

    std::ofstream write_output("x_et_y.dat");
    assert(write_output.is_open());

    write_output << "valeurs de x : ";
    write_output.flush();

    for (int i = 0; i < 4; i++)
    {
        if (x[i] > 0)
        {
            write_output << "+";
        }

        write_output.precision(10);
        write_output << x[i] << " ";
        write_output.flush();
    }

    write_output << std::endl
                 << "valeurs de y : ";
    write_output.flush();

    for (int i = 0; i < 4; i++)
    {
        if (y[i] > 0)
        {
            write_output << "+";
        }

        write_output.precision(10);
        write_output << y[i] << " ";
        write_output.flush();
    }

    write_output.close();
    return 0;
}