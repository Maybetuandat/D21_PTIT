<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta charset="UTF-8">
<title>Đổi mật khẩu</title>
<link rel="stylesheet" href="styles/dangnhap.css" />
<style>
body {
	background-image: url(images/background.jpg);
}
</style>
</head>
<body>

	 <div class="form">
		 <div class="logo">
		 	<img id="logo" src="images/logo.png">
		 	<div class = "h">
			<div class="hv"><h1>HỌC VIỆN CÔNG NGHỆ BƯU CHÍNH VIỄN THÔNG</h1></div>
			<div class="hv2"><h1>Posts and Telecommunications Institude of Technology</h1></div>
			</div>
		</div>
	    <form action="NewPassword" method="post" >       
	        <input type="password" name="mk1" placeholder="Mật khẩu mới"><br>
	        <input type="password" name="mk2" placeholder="Nhập lại mật khẩu"><br>      
	        <p><i>${message}</i></p>    
	        <input type="submit" value="Xác nhận" class="margin_left">
	    </form>
	 </div>


</body>
</html>