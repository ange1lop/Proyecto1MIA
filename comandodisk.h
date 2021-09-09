#ifndef COMANDODISK_H
#define COMANDODISK_H
#include "string"
using namespace std;
class comandodisk
{
public:
    comandodisk();
    int size;
    string fechacreacion;
    string unit;
    string path;
    string fit;
    void crearfichero(comandodisk *disco);
};

#endif // COMANDODISK_H
