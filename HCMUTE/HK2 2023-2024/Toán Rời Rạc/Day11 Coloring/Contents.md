![[Pasted image 20240411073511.png]]
Các bước làm
1. Travel nodes in order 
	 usedColors = Used colors by neighbors
	 colors[node] = mex (usedColors, P={possible colors at max})

2. Return colors
![[Pasted image 20240411080404.png]]

chọn số thấp nhất làm khởi đầu, sau đó chọn cái tiếp theo cận bé nhất là màu xanh lá nên chọn màu xanh lá, trên 2 xanh lá và đỏ thì chắc chắn là xanh biển mà 2 cái cận xanh biển và đỏ chắc chắn là xanh lá. 3 không link với 1

Adaptive: các nhóm thuật toán lưu đường đi dựa vào ngữ cảnh hiện tại. Nếu có vấn dề gì nó sẽ lựa chọn đường đi tối ưu hơn
Non-Adaptive: nhóm này chọn 1 đường đi cố định.
Hybrid: Pha trộn giữa Adaptive và non-adaptive 

Adaptive:
- Các quyết định định tuyến thay đổi khi cấu trúc liên kết hoặc tải lưu lượng truy cập những thay đổi.
- Thông số: Khoảng cách, số bước nhảy, thời gian vận chuyển ước tính
