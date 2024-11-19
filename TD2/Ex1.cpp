// Exercice 1
int Exercice1(int argc, char *argv[])
{
    double x, y, z;
    if ((x > y) || (x < 5.0))
    {
        z = 4.0;
    }
    else
    {
        z = 2.0;
    }
}

// a. 4.0
// b. 2.0
// c. 4.0

// Exercice 1.2
int Exercice1point2(int argc, char *argv[])
{
    double x, y, z;
    if (((x > y) || (x = y)) || (x < 5.0))
    {
        z = 4.0;
    }
    else
    {
        z = 2.0;
    }
}