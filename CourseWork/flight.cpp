/*
 * #include <cstdio>
#include <string>
#include "flight.h"
#include "doublylinkedlist.h"
using namespace std;

Flight :: Flight()
{}

void Flight::createListOfFlights()
{
    bool result = true;
    //string temp;
    ofstream Inputfile;
    Inputfile.open("DFile.txt", ios::app);
    DoublyLinkedList <MatrixElem> structsOfFlight;
    if (!Inputfile.is_open()){
        result = false;
    }
    else {
         while (!Inputfile.eof()){
             MatrixElem temp;
          Inputfile<<temp.NumOfFl;
          Inputfile<<temp.price;
          Inputfile<<temp.NumOfFl;
          temp.price = 0;
          if (structsOfFlight.search(temp) != -1){
             structsOfFlight.push_back(temp);
          }
          Inputfile<<temp.NumOfFl;

          if (structsOfFlight.search(temp) != -1){
             structsOfFlight.push_back(temp);
          }
         }
    }
    Inputfile.close();


       MatrixElem **table = new MatrixElem*[structsOfFlight.size()];
       for ( int i = 0; i < structsOfFlight.size(); i++){
            *table = new MatrixElem[structsOfFlight.size()];
       }
       for (int i = 1; i <= structsOfFlight.size();i++){ //заполняем первый столбец и строку матрицы
           table[i][0]= structsOfFlight[i-1];
           table[0][i] = structsOfFlight[i-1];
       }

       //заполнение таблицы

       Inputfile.open("DFile.txt", ios::app);
       if (!Inputfile.is_open()){
           result = false;
       }
       else
       int i, j;
            while (!Inputfile.eof()){
                MatrixElem temp, tempString;
                Inputfile<<temp.NumOfFl;
                Inputfile<<temp.price;
                Inputfile<<tempString.NumOfFl;
                int i = structsOfFlight.search(tempString);
                 Inputfile<<tempString.NumOfFl;
                 int j = structsOfFlight.search(tempString);
                 if ((table[i][j].price > temp.price) && (table[i][j].price != 0)){
                    table[i][j] = temp;
                 }

       }
          Inputfile.close();











       /*    DoublyLinkedList <MatrixElem> visited; // посещенные вершины
           int temp, minindex, min;
           int begin_index = 0;

          do {
              minindex = 10000;
              min = 10000;
              for (int i = 0; i<visited.size(); i++)
              { // Если вершину ещё не обошли и вес меньше min
                if ((visited[i].price == 1) && (d[i]<min))
                { // Переприсваиваем значения
                  min = d[i];
                  minindex = i;
                }
              }
              // Добавляем найденный минимальный вес
              // к текущему весу вершины
              // и сравниваем с текущим минимальным весом вершины
              if (minindex != 10000)
              {
                for (int i = 0; i<SIZE; i++)
                {
                  if (a[minindex][i] > 0)
                  {
                    temp = min + a[minindex][i];
                    if (temp < d[i])
                    {
                      d[i] = temp;
                    }
                  }
                }
                v[minindex] = 0;
              }
            } while (minindex < 10000);
            // Вывод кратчайших расстояний до вершин
            printf("\nКратчайшие расстояния до вершин: \n");
            for (int i = 0; i<SIZE; i++)
              printf("%5d ", d[i]);

            // Восстановление пути
            int ver[SIZE]; // массив посещенных вершин
            int end = 4; // индекс конечной вершины = 5 - 1
            ver[0] = end + 1; // начальный элемент - конечная вершина
            int k = 1; // индекс предыдущей вершины
            int weight = d[end]; // вес конечной вершины

            while (end != begin_index) // пока не дошли до начальной вершины
            {
              for (int i = 0; i<SIZE; i++) // просматриваем все вершины
                if (a[end][i] != 0)   // если связь есть
                {
                  int temp = weight - a[end][i]; // определяем вес пути из предыдущей вершины
                  if (temp == d[i]) // если вес совпал с рассчитанным
                  {                 // значит из этой вершины и был переход
                    weight = temp; // сохраняем новый вес
                    end = i;       // сохраняем предыдущую вершину
                    ver[k] = i + 1; // и записываем ее в массив
                    k++;
                  }
                }
            }
            // Вывод пути (начальная вершина оказалась в конце массива из k элементов)
            printf("\nВывод кратчайшего пути\n");
            for (int i = k - 1; i >= 0; i--)
              printf("%3d ", ver[i]);
            getchar(); getchar();
            return 0;
          }
}*/


