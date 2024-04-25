-**setprecision(value):**
- Setprecision trong C++ dùng để lấy số lượng chữ số trong phần thập phân sau dấu chấm động.
- Ví dụ: **cout << setprecision(n) << f** :  in số thập phân f làm tròn đến n chữ số thập phân.
- Trường hợp nếu **f** có ít hơn **n** chữ số phần thập phân, ví dụ như  f = 3.1 mà  n = 4  
    thì khi **`cout << setprecision(n) << f`** sẽ chỉ in ra 3.1 mà không hiện đầy đủ 4 chữ số phần thập phân.
- Do đó, nếu muốn in `f = 3.1` với chữ số thập phân thành `f = 3.1000` thì thêm `fixed để` cố định in ra n chữ số phần thập phân.
-getline(cin, value): dùng nhập tên sử dụng biến string có thể dấu cách ra(space). 
	Cấu trúc: 
	
		 cin.ignore();
		 getline(cin, varible); //dùng nhập tên string
-Kiểu trả về operator (+,-,...) (danh sách tham số) { // }
		VD:
		
		 struct-name operator + (const struct-name other) {
		 struct-name sum;
		 sum.a =a + other.a;
		 tong.b=b + other.b;
		 return tong;
		 }

		 friend struct-name operator + (const struct-name x, const struct-name y,...) {
		 struct-name sum;
		 sum.a =x.a + y.a;
		 sum.b=x.b + y.b;
		 return sum;
		 }
		//insertion >>
		friend istream& operator >> (istream& in, struct-name &x){
				in >> x.a >> x.b;
				return in;
			}
			//extraction <<
			friend ostream& operator <, (ostream& out, sophuc x){
				out << x.a << " " << x.b;
				return out;
			}
-So sánh 2 số phức:
+dùng friend so sanh cũng có bool:

				friend bool operator == (const struct-name x, const struct-name y){
					return x.z == y.a && x.b == y.b;
				}
	
+dùng bool so sánh : 

				bool operator == (const struct-name other) {
					return a == other.a && b== other.b;
				}
-Sắp xếp dùng bool:
	+dùng bool:
	
			bool operator < (const something1 other){
					return something2 < other.something2
			}
