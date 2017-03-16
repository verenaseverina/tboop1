#include "state.h"

using namespace std;

State::State() {
  ifstream input_file("map.txt");
  ofstream output_file("cek.txt");

  int baris = 0;
  width = 0;
  height = 0;
  if (output_file.is_open()) {
    while (!input_file.eof()) {
      if (baris == 0) {
        // membaca width dan height map dari peta
        char buf[max_chars_perline];
        input_file.getline(buf, max_chars_perline);
        int n = 0;
        const char* token[max_tokens_perline];
        token[0] = strtok(buf, delimiter);
        if (token[0]) {
          for (n = 1; n < max_tokens_perline; n++) {
            token[n] = strtok(0, delimiter);
            if (!token[n]) {
              break;
            }
          }
        }	
        for (int i = 0; i < n; i++) {
          output_file << token[i] << " ";
        }
        output_file << endl;
        height = stoi(token[0]);
        width = stoi(token[1]);

        // buat matriks map sesuai dengan width dan height
        map = new char* [height];
        for (int k = 0; k < height; k++) {
          map[k] = new char [width];
        }
      }
      else if (baris <= height) {
        char buf[max_chars_perline];
        input_file.getline(buf, max_chars_perline);
        output_file << buf << endl;
        for (int l = 0; l < width; l++) {
          map[baris-1][l] = buf[l];
        }
      }
      else {
        char buf[max_chars_perline];
        input_file.getline(buf, max_chars_perline);
        output_file << buf << endl;
      }
      /* else{} siapa tau mau taro legendanya di map.txt */
      baris++;
    }
    input_file.close();
    output_file.close();
  }
}

char** State::GetMap() {
  return map;
}

int State::GetHeight() {
  return height;
}

int State::GetWidth() {
  return width;
}
