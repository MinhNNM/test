<%--
  Created by IntelliJ IDEA.
  User: MinhNN
  Date: 3/1/2022
  Time: 12:45 PM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>MinhNN</title>
</head>
<body>
    <%
        String name=(String) request.getSession().getAttribute("user");
        out.print("xin chao "+name);
    %>
</body>
</html>
