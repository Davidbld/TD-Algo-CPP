#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath> //fonction cubique


int main(int argc, char *argv[]){
    double x[4]={0.0,1.0,1.0,0.0};
    double y[4]={0.0,0.0,1.0,1.0};

    std::ofstream write_output("x_et_y.dat");
    assert(write_output.is_open());

    write_output<<"valeurs de x : ";
    write_output.flush();

    for (int i = 0; i < 4; i++)
    {
        write_output.precision(10);
        write_output<<x[i]<<" ";
        write_output.flush();
    }

    write_output<<"\n"<<"valeurs de y : ";
    write_output.flush();
    
    for (int i = 0; i < 4; i++)
    {
        write_output.precision(10);
        write_output<<y[i]<<" ";
        write_output.flush();
    }
    
    write_output.close();
    return 0;
}