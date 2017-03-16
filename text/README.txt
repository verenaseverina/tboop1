Panduan Singkat Pembuatan Testcase untuk Olympia

Testcase pada Olympia terdiri dari beberapa pasang file input dan output.
File input digunakan sebagai masukan untuk program, sedangkan file output merupakan hasil keluaran program.
File tersebut akan digunakan untuk menilai kebenaran program. Program akan dijalankan dengan masukan dari file input.
Hasil keluaran program akan dibandingkan dengan file output. Apabila sesuai, maka jawaban dianggap benar.

Sebagai contoh, untuk program C++ untuk mengalikan sebuah bilangan dengan 2:

Salah satu contoh isi file input yang sesuai adalah:
5

Program diharapkan mengeluarkan '10' untuk masukan tersebut, sehingga file output akan berisi:
10

Pada Tugas Besar ini, format penamaan untuk file input dan output adalah:

<#>.in untuk file input
<#>.out untuk file output

<#> adalah nomor testcase.
Input dan output yang berpasangan memiliki nomor testcase yang sama.
Contohnya: 1.in dan 1.out, 2.in dan 2.out, dan seterusnya.

File tersebut harus diletakkan pada level direktori paling atas, bersama dengan makefile.
Contoh lebih lanjut dapat dilihat pada file yang disertakan.
