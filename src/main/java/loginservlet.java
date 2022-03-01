import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
@WebServlet(name = "login", urlPatterns = {"/login"})
public class loginservlet extends HttpServlet {
    protected void doPost (HttpServletRequest request, HttpServletResponse response){
        try{
            String name=request.getParameter("user");
            request.getSession().setAttribute("user", name);
            response.sendRedirect("trangchu.jsp");
        }catch (Exception e){
            System.out.println(e);
        }
    }
}
