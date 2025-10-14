//
//  SelectionSort.cpp
//  DataStructure
//
//  Created by 정대로 on 9/15/25.
//

//#include "SelectionSort.hpp"
//
//struct Element {
//    int key;
//    char value;
//};
//
//// 3개 정렬
//void SelectionSort::processThree() {
//    for (int k=0; k<3; ++k) {
//        for (int j=0; j<3; ++j) {
//            for (int i=0; i<3; ++i) {
//                int arr[3] = { i, j, k };
//                int size= sizeof(arr) / sizeof(arr[0]);
//                
//                for (int e=0; e<size; e++) {
//                    cout << arr[e] << " " << flush;
//                }
//                
//                cout << " -> " << flush;
//                
//                //TODO: 정렬 하기
////                for (int z=0; z<size; ++z) {
////                    for (int y=z+1; y<size-1; ++y) {
////                        if(arr[z] > arr[y]) {
////                            int temp= arr[z];
////                            arr[z] = arr[y];
////                            arr[y] = temp;
////                        }
////                    }
////                }
//                if (arr[0] > arr[1]) {
//                    MySwapRef(arr[0], arr[1]);
//                }
//                if (arr[1] > arr[2]) {
//                    MySwapRef(arr[1], arr[2]);
//                }
//                if (arr[0] > arr[1]) {
//                    MySwapRef(arr[0], arr[1]);
//                }
//                
//                for (int e=0; e<size; ++e) {
//                    cout << arr[e] << " " << flush;
//                }
//                
//                cout << boolalpha;
//                cout << CheckSorted(arr, size); // 정렬 되었나 확인
//                cout << endl;
//            }
//        }
//    }
//}
//
//bool SelectionSort::CheckSorted(int* arr, int size) {
//    // TODO: 정렬 확인 함수 구현
//    // solved myself
////    for (int i=0; i<size-1; ++i) {
////        for (int j=i+1; j<size; ++j) {
////            if (arr[i] > arr[j]) {
////                return false;
////            }
////        }
////    }
//    
//    for (int i=0; i<size-1; ++i) {
//        if (arr[i] > arr[i+1]) {
//            return false;
//        }
//    }
//    
//    return true;
//}
//
//int SelectionSort::minNumber(int (&arr)[5]) {
//
////    int temp= arr[0];
////    for (int i=0; i<4; ++i) {
////        if (arr[i] > arr[i+1]) {
////            temp= arr[i+1];
////        }
////    }
////    return temp;
//    int size= sizeof(arr) / sizeof(arr[0]);
//    int min_number= arr[0];
//    for (int i=1; i<size; ++i) {
//        min_number= arr[i] < min_number ? arr[i] : min_number;
//    }
//    
//    return min_number;
//}
//
//int SelectionSort::minNumIndex(int (&arr)[5]) {
////    int size= sizeof(arr) / sizeof(arr[0]);
////    int min_index_number= arr[0];
////    for (int i=0; i<size-1; ++i) {
////        min_index_number= arr[i] < arr[i+1] ? i : i+1;
////    }
//    int size= sizeof(arr) / sizeof(arr[0]);
//    int min_index= 0;
//    for (int j=1; j<size; ++j) {
//        if (arr[j] < arr[min_index]) {
//            min_index= j;
//        }
//    }
//    
//    return min_index;
//}
//
//void SelectionSort::selectionSort(int (&arr)[5]) {
//    int size= sizeof(arr) / sizeof(arr[0]);
//    
//    for (int i=0; i<size-1; ++i) {
//        for (int j=i+1; j<size; ++j) {
//            if (arr[i] > arr[j]) {
//                int temp= arr[i];
//                arr[i]= arr[j];
//                arr[j]= temp;
//            }
//        }
//    }
//    cout << "selection sort: " << flush;
//    for (int i=0; i<size; ++i) {
//        cout << arr[i] << " " << flush;
//    }
//    
//    cout << endl;
//    
//}
//
//// 비교 횟수 세보기, 더 효율적인 방법은 없을까?
//// https://en.wikipedia.org/wiki/Sorting_algorithm
//void SelectionSort::sortExample() {
//    ofstream ofile("log.txt");
//    for (int size=1; size<1000; ++size) {
//        int count= 0;
//        int* arr= new int[size];
//        for (int s=0; s<size; ++s) {
//            arr[s]= size - s;
//        }
//        
//        int min_index;
//        for (int i=0; i<size-1; ++i) {
//            min_index= i;
//            for (int j=i+1; j<size; ++j) {
//                count++;
//                
//                if(arr[j] < arr[min_index]) {
//                    min_index= j;
//                }
//                swap(arr[i], arr[min_index]);
//            }
//            
//            ofile << size << ", " << count << endl;
//            
//            delete[] arr;
//        }
//        
//        ofile.close();
//    }
//}
//
//
//void SelectionSort::StableSort() {
//    Element arr[] = { {2, 'a'}, {2, 'b'}, {1, 'c'} };
//    int size= sizeof(arr) / sizeof(arr[0]);
//    
//    int min_index;
//    
//    for (int i=0; i<size-1; ++i) {
//        min_index= i;
//        for (int j=i+1; j<size; ++j) {
//            if (arr[j].key < arr[min_index].key) {
//                min_index= j;
//            }
//            swap(arr[i], arr[min_index]);
//        }
//    }
//}
