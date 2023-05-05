#include<iostream>
using namespace std;

// Fungsi untuk mencari nilai minimum dari array
int minArray(int arr[], int n) {
    int min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    for(int i=0;i<=n;i++){
	
    if(arr[i]==min){
    	cout<<0;
	}
    return min;
}
}

// Fungsi untuk mencari nilai maksimum dari array
int maxArray(int arr[], int n) {
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Fungsi untuk mencari median dari array
double medianArray(int arr[], int n) {
    double median;

    // Jika jumlah elemen array ganjil
    if(n % 2 == 1) {
        median = arr[n/2];
    }
    // Jika jumlah elemen array genap
    else {
        median = (arr[n/2-1] + arr[n/2]) / 2.0;
    }

    return median;
}

// Fungsi untuk input array
void inputArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int num;
        bool isDuplicate;
        do {
            isDuplicate = false;
            cout << "Masukkan bilangan ke-" << i+1 << ": ";
            cin >> num;
            // Cek apakah input bilangan sudah ada sebelumnya
            for(int j=0; j<i; j++) {
                if(arr[j] == num) {
                    isDuplicate = true;
                    cout << "Bilangan yang dimasukkan harus berbeda." << endl;
                    break;
                }
            }
            // Cek apakah input bilangan bernilai 0
            if(num == 0) {
                cout << "Bilangan yang dimasukkan tidak boleh bernilai 0." << endl;
                isDuplicate = true;
            }
        } while(isDuplicate);
        arr[i] = num;
    }
      for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

}

int main() {
    cout << "=== MEDIAN ===" << endl;
    cout << "Note pengujian :" << endl;
    cout << "=> Tiap angka harus berbeda" << endl;
    cout << "=> Tidak boleh ada angka 0" << endl;
    int n;
    cout << "Input banyak indeks array: ";
    cin >> n;

    int arr[n];
    inputArray(arr, n);

    cout << "Penjabaran data array sdi proses: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Median data array: " << medianArray(arr, n) << endl;
    cout << "Nilai minimum adalaah: " << minArray(arr, n) << endl;
    cout << "Nilai maksimum adalah: " << maxArray(arr, n) << endl;
     

    return 0;
}

