<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <title>Đổi Mật Khẩu</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f0f0f0;
            color: #333;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: #fff;
            border-radius: 10px;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            padding: 20px;
            width: 300px;
            text-align: center;
        }
        input[type="password"] {
            width: 100%;
            padding: 10px;
            margin: 10px 0;
            border-radius: 5px;
            border: 1px solid #ccc;
        }
        input[type="submit"] {
            width: 100%;
            padding: 10px;
            border-radius: 5px;
            border: none;
            background-color: #4CAF50;
            color: white;
            font-size: 16px;
            cursor: pointer;
        }
        input[type="submit"]:hover {
            background-color: #45a049;
        }
        .message {
            color: red;
            margin: 10px 0;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Đổi Mật Khẩu</h1>
        <form action="ChangePasswordServlet" method="post">
            <input type="password" name="currentPassword" placeholder="Mật khẩu hiện tại" required>
            <input type="password" name="newPassword" placeholder="Mật khẩu mới" required>
            <input type="password" name="confirmPassword" placeholder="Xác nhận mật khẩu mới" required>
            <input type="submit" value="Đổi mật khẩu">
        </form>
        <c:if test="${not empty message}">
            <div class="message">${message}</div>
        </c:if>
    </div>
</body>
</html>
