int main(){
  double A;
  cout << showpos << setw(15) << setfill('_') << fixed << setprecision(2) << A << endl;
  /*
  input -384.345243
  output _ _ _ _ _ _ _ _-384.34
  
  showpos：顯示正負。
  setw(15)：輸出總長設定為15。
  setfill('_')：左側以‘＿’填補不足的空白處。
  fixed：使用固定點表示法。
  setprecision(2)：保留2位小數。
  */

  int a = static_cast<int>(A);
  cout << hex << a << endl;
  cout << hex << left << showbase << a << endl;
  cout << hex << left << showbase << nouppercase << a << endl;
  /*
  input :100.345
  output:      64
          0X64
          0x64

  static_cast<type> (num):強制轉型
  hex : 以16進位方式輸出
  */
}
