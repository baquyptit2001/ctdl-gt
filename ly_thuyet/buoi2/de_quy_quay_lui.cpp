//                                                                           Đệ quy quay lui

/*

*Phương pháp thử - sai
    -Dùng cho vấn đề k có quy tắc
    -Quá trình thử-sai đc xem xét trên các bài toán đơn giản hơn
    -Giải quyết bài toán bằng cách thử tất cả các khả năng
        +Giả sử đã giải quyết đến bước i-1
        +Duyệt các khả năng từ 1 đến ni để tìm giải pháp cho bước thứ i
            Với mỗi khả năng j chấp nhận đc, thử i=n thì hoàn thành bài toán, ngược lại giải quyết tiếp bước i+1
            Nếu không có khả năng nào chấp nhận đc thì quay lại bước trc để thử khả năng khác cho bước i-1

*3 Vấn đề quan trọng cho bài toán quay lui
-Tìm cách biểu diễn nghiệm của bài toán dưới dạng 1 dãy các đối tượng được chọn ở từng bước (x1, x2,.. , xn)
-Xác định tập S các ứng viên đc  lựa chọn làm thành phần thứ i của nghiệm
-Tìm các điều kiện để tập các thành phần đã chọn là nghiệm của bài toán

*Cài đặt thuật toán

void try(int i){
    int j
    for(j=1;j<ni;j++){
        if(chấp nhận j){
            ghi lại bước i theo j
            if(i==n)
                kết thúc thành công
            else try(i+1)
        }
        bỏ ghi bước i
    }
}

VD:Liệt kê tổ hợp chập k của n

-Tập  con k phần tử ko phân biệt thứ tự
-Để đơn giản  ta xét  các tập có thứ tự tăng dần
-Tại bước i ta chọn 1 phần tử từ xi+1 -> n-k+i
-Nếu đạt k phần tử, tiến hành ghi nhận nghiệm
-Ngược lại gọi đệ quy tiến hành ở bước i+1

void Try(int i){
    for(int j = a[i-1]+1;j<=n-k+i;j++)
        a[i] = k
        if(i==k){
            printRes
        }
        else{
            try(i+1)
        }
}

Liệt kê hoán vị

-Dùng mảng a[i] để lưu các hoán vị (i=1,..n) Lưu ý a[i]!=a[j] với mọi i!=j
-Dùng mảng used[i] để xem phần tử i đã đc sd chưa
-Ý tưởng:
    +Chọn 1 phần tử chưa đc sử dụng
    +Lưu vào cấu hình tổ hợp và đánh dấu đã sử dụng
    +Lặp lại cho đến khi đủ cấu hình thì in kết quả
    +Quay trở lại bước trước để đánh dấu chưa sử dụng

*/