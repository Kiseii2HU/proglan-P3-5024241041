# Soal 1 : Sistem Gacha Genshin Impact (Multiple Inheritance & Diamond Problem)

## JANGAN UBAH MAIN

## Deskripsi
Pada soal ini, kamu diminta untuk melengkapi class-class yang sudah disediakan untuk mempraktikkan konsep multiple inheritance dan diamond problem di C++. Terdapat class dasar `Karakter`, dua class turunan `BintangEmpat` dan `BintangLima`, serta class `WishResult` yang mewarisi dari keduanya. Setiap karakter memiliki nama, elemen, dan rarity. Setiap hasil gacha juga memiliki ID wish, jumlah primogem yang digunakan, dan status ("baru" jika karakter belum pernah dimiliki, "duplikat" jika sudah pernah dimiliki). Tugasmu adalah memastikan data nama karakter, elemen, rarity, hasil gacha, dan status dapat diakses dan dicetak dengan benar tanpa terjadi duplikasi data akibat diamond problem.

## Input
- Jumlah hasil gacha.
- Untuk setiap hasil gacha, input secara berurutan:
  - Nama karakter
  - Elemen karakter (misal: Pyro, Hydro, Electro, dll)
  - Rarity (4/5)
  - ID wish
  - Primogem yang digunakan
  - Status (baru/duplikat)

## Output
- Cetak detail hasil gacha setiap wish.

## Expected Input
```
2
Xiangling Pyro 4 W123 160 baru
Raiden Electro 5 W124 160 duplikat
```

## Expected Output
```
Nama: Xiangling, Elemen: Pyro, Rarity: 4, Wish ID: W123, Primogem: 160, Status: baru
Nama: Raiden, Elemen: Electro, Rarity: 5, Wish ID: W124, Primogem: 160, Status: duplikat
```

## Catatan
- Lengkapi class-class yang sudah disediakan di `soal1.cpp`.
- Gunakan virtual inheritance untuk menghindari duplikasi data pada diamond problem.
- Jangan ubah fungsi `main`.
- Jangan gunakan AI karena akan menumpulkan dasar pemrogramanmu. Jika bingung, cari referensi di Modul atau Stack Overflow.
