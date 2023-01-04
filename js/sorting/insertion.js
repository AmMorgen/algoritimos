function insertionCres(arr, n){
    let i, chave, j;
    for(i =1;i< n;i++){
        chave = arr[i];
        j=i-1;

        while(j >= 0 && arr[j]> chave){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = chave;
    }
}
function insertionDesCres(arr, n){
    let i, chave, j;
    for(i =1;i< n;i++){
        chave = arr[i];
        j=i-1;

        while(j >= 0 && arr[j] < chave){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = chave;
    }
}

function printArray(arr, n){
    let i;
    for(i = 0; i< n;i++){
        document.write(arr[i] + " ");
    }
    document.write("<br>");
}

let  arr = [4,7,2,5,4,0];
let n = arr.length;
printArray(arr, n);
insertionCres(arr, n);
printArray(arr, n);
insertionDesCres(arr, n);
printArray(arr, n);