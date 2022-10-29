
function isPrime(n){
    for(var i = 2; i < parseInt(n/2)+1; i++){

        if(n % i === 0) return 0;
    }
    return 1;
}

var last = Date.now();

numPrimes = 0;

for(let i = 2; i < 250001; i++){

    numPrimes += isPrime(i)
}
console.log(numPrimes)
console.log('${Date.now() - last} -ms')