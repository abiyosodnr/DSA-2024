package main

import "fmt"

func main() {
	var a, b, jumlah int
	fmt.Scan(&a, &b)
	jumlah = penjumlahan(a,b)
	fmt.Println(jumlah)
}

func penjumlahan(a, b int) int{
	return a + b
}