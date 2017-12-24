#include "matrix.h"

#include <iostream>
#include <mpi.h>

inline void print_dash(){
    std::cout << "=============================" << std::endl;
}

int main(int argc, char* argv[]){

    MPI_Init(&argc, &argv);

    int size, rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    std::cout << "Here is rank: " << rank << std::endl;

    print_dash();

    MPI_Finalize();   

    // print_dash();

    // la::Matrix m(2, 3, 5.5);
    // m.print(true);
    // print_dash();

    // la::Matrix a(3, 4, 2);
    // a.print(true);
    // print_dash();

    // la::Matrix b(3, 4, 3);
    // b.print(true);
    // print_dash();

    // la::Matrix c = m * a;
    // c.print(true);
    // print_dash();

    // la::Matrix d = a + b;
    // d.print(true);
    // print_dash();

    // la::Matrix f("M");
    // f.print(true);
    // print_dash();

    return 0;  
}