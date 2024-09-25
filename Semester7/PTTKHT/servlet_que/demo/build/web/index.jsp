<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta charset="UTF-8">
<title>Đăng nhập</title>
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
	    <form action="emailList" method="post" >       
	        <input type="text" name="tk" value="${user.tk}" placeholder="Tên đăng nhập"><br>
	        <input type="password" name="mk" value="${user.mk}" placeholder="Mật khẩu"><br>   
	        <p><i>${message}</i></p>    
	        <input type="submit" value="Đăng nhập" class="margin_left">
	    </form>
	    <button class="dangky" onclick="dangKy()">Đăng ký</button>
	    <button class="quenmk" onclick="quenMk()">Quên mật khẩu</button> 
	 </div>
	 
	 <script>
	    function dangKy() {
	        // Thực hiện chuyển hướng
	        window.location.href = "/dangky.jsp";
	    }
	    function quenMk() {
	        // Thực hiện chuyển hướng
	        window.location.href = "/resetpass.jsp";
	    }
	</script>

</body>
</html>