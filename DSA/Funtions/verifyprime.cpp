bool verifyPrime(int n){
  bool check=true;
  for(int i=2;i<n;i++){
    if(n%i==0){
      check=false;
      break;
    }
  }
  if(n<2){
    check=false;
  }
  return check;
}