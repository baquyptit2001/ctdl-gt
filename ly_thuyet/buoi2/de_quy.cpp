/*

                                                                                        Đệ quy(Recursion)

Định nghĩa đệ quy
    Nó hoặc 1 phần của nó đc định nghĩa qua chính nó

Định nghĩa số tự nhiên
    0 là số tự nhiên
    nếu k là số tự nhiên thì k+1 cũng là số tự nhiên

Định nghĩa xâu ký tự bằng đệ quy
    Xâu rỗng là 1 xâu ký tự
    1 chữ cái bất kỳ ghép vs 1 xâu sẽ tạo ra xâu ms

Định nghĩa hàm giai thừa, n!
    Khi n =0, định nghĩa 0!=1
    Khi n>0, định nghĩa n!=(n-1)! * n


* Khái niệm đệ quy

-Chương trình đệ quy
    Có lời gọi tới chính nó
-Đặc điểm chương trình đệ quy
    Có thể gọi chính nó
    Giải quyết vấn đề tương tự nhưng nhỏ hơn (tham số nhỏ hơn)
    Chương trình đc gọi nhỏ dần đến khi tự giải quyết đc không cần gọi chính nó nữa
-Ưu điểm chương trình đệ quy:
    Thực hiện một số lượng lớn các thao tác tính toán thông qua 1 chương trình ngắn gọn

*Điều kiện chương trình đệ quy
-Vấn đề càn phải đc xử lý bằng đệ quy
-Ngôn ngữ dùng để viết phải hỗ trợ đệ quy
-Hạn chế khai biến, hằng, thủ tục con trong hàm đệ quy
-Đệ quy trực tiếp
    Gọi chính nó
-Đệ quy gián tiếp
    Gọi chính nó thông qua thủ tục trung gian

*Khi nào không nên dùng đệ quy
-Khi chương trình có thể xử lý bằng các cấu trúc lệnh khác(lặp) mà k quá phức tạp
-Khi gọi hàm đệ quy không đảm bảo tham số sẽ nhỏ đi
    n chẵn: = n/2
    n lẻ: =3*n+1
-Khi gọi hàm đệ quy có thể tạo các tính toán thừa
    VD: dãy fibonacci

*/