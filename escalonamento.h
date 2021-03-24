#ifndef FCFS_H
#define FCFS_H

#include <vector>
#include <iostream>
#include <string>
#include <unistd.h>
#include "processo.h"
#include "entrada.h"

class Escalonamento
{
private:
    vector<Processo> p; // Vetor de processos

public:
    Escalonamento();                 // Construtor padrão
    ~Escalonamento();                // Destrutor padrão
    void setParametros(Processo pn); // Cria os objetos e adiciona os parametros
    void imprimiDados();             // Imprimi os dados dos processos
    void fcfs();                     // Escalonamento por FCFS (First Come, First Served)
    void sjf();                      // Escalonamento por Shortest Job First
    void psp();                      // Escalonamento por prioridade, sem preempção
    void pcp();                      // Escalonamento por prioridade, com preempção por prioridade
    void rrsp();                     // Escalonamento por Round-Robin com quantum = 2s, sem prioridade
    void rrcp();                     // Escalonamento por Round-Robin com prioridade e envelhecimento (tq=2, α=1)
};

#endif