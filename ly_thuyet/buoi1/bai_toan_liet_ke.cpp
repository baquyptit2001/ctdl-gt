/*
*Lớp bài toán phổ biến trong tin học
    Liệt kê tập con của tập hợp
    Liệt kê hoán vị
*Bài toán liệt kê đơn giản(khi số liệu ít hoặc xác định):
    Thủ công
    Dùng vòng lặp (trong lập trình)
*Phương pháp sinh giúp giải quyết các bài toán liệt kê tổ hợp phức tạp hơn

---------------------------------------------------------------------------------------------

Điều kiện thực hiện

*Xác định được thứ tự trên tập các cấu hình liệt kê
    Thứ tự từ điển
*Xây dựng đc cấu hình đầu và cấu hình cuối
*Xây dựng đc thuật toán, từ 1 cấu hình chưa phải cấu hình cuối sinh ra đc cấu hình kế tiếp
    Liệt kê tất cả: Liên tục đến cấu hình cuối

---------------------------------------------------------------------------------------------

Thứ tự từ điển

*So sánh kiểu số: Sử dụng giá trị
*So sánh ký tự:Sử dụng thứ tự từ điển
    Thứ tự trong bảng chữ cái
*So sánh xâu ký tự hoặc dãy số:So sánh từng phần tử từ đầu dãy
    Dãy a[1..n]<b[1..n]
        a[1] = b[1]
        ...
        a[k] = b[k]
        a[k+1]<b[k+1]
    Nếu độ dài khác nhau, bổ sung phần tử rỗng cho bằng nhau

---------------------------------------------------------------------------------------------

Các bước thực hiện

1.Tạo cấu hình đầu tiên (thứ tự từ điển nhỏ nhất)
2.Thực hiện vòng lặp
    2.1 Đưa ra cấu hình hiện tại
    2.2 Kiểm tra cấu hình hiện tại có phải cấu hình cuối không. Nếu là cấu hình cuối break
    2.3 Từ cấu hình hiện tại, sinh cấu hình kế tiếp
    2.4
3.

---------------------------------------------------------------------------------------------

Mã giải thuật toán sinh

<Xây cấu hình đầu tiên>
while True:
    <In cấu hình hiện tại>
    if(cấu hình cuối)
        break
    <sinh tiếp theo>

---------------------------------------------------------------------------------------------

VD1. Xâu nhị phân kế tiếp

1. Dãy nhị phân độ dài n: x1, x2, ..., xn (xi thuộc [0,1])
2. Mỗi dãy là 1 số nguyên thuộc [0, 2^(n)-1]
3. Cấu hình đầu tiên: 00...00
4. Cấu hình cuối cùng: 11..11
5. Quy tắc sinh cấu hình kế tiếp
    1. Dãy kế tiếp dãy x1, x2, ..., xn có đc bằng cộng 1(cơ số 2) vào dãy hoặc số thập phân tiếp theo
    2. Thuật toán sinh: Xét từ cuối dãy, gặp số 0 đầu tiên thì thay bằng 1 và tất cả các số phía sau = 0

RESOLUTION: duyệt từ cuối 1 -> 0. gặp 0 -> 1 dừng

---------------------------------------------------------------------------------------------

VD2: Tập con k phần tử

1. Tập con n phần tử (1,2,...,n)
2. Tập con k phần tử lấy từ tập trên
3. Cấu hình đầu tiên: 1, 2, ..., k
4. Cấu hình cuối cùng:  n-k+1,...,n
5. Quy tắc sinh tập con kế tiếp:
    1. Tập con x1<x2<...<xk: Giới hạn trên của xk là n, của xi là x(i-1)+1
    2. Thuật toán sinh: Tìm từ cuối dãy, gặp 1 phần tử chưa chạm trần tăng lên 1 và các phần tử sau
    tăng dần thêm 1

---------------------------------------------------------------------------------------------

VD3: Liệt kê hoán vị

1. Liệt kê hoán vị của (1, 2, ..., n)
2. Cấu hình đầu tiên (1, 2, ..., n)
3. Cấu hình cuối cùng (n, n-1, ...., 1)
4. Quy tắc sinh
    1. Tìm đoạn cuối giảm dần dài nhất (duyệt từ cuối dãy gặp a[j] đầu tiên nhỏ hơn a[j+1])
    2. Tìm a[k] nhỏ nhất trong đó mà >a[j]
    3. Swap a[j], a[k]
    4. Đảo ngược đoạn a[j+1], a[n]
*/