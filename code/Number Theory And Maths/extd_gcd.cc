// return {x,y} such that ax+by=gcd(a,b)
pair<int, int>
ext_gcd(int a, int b){
  if (b == 0) return {1, 0};
  else{
    pair<int, int> tmp = ext_gcd(b, a % b);
    return {tmp.second,tmp.first - (a / b) * tmp.second};
  }
}
