void f()
{
    A a;
    try
    {
        /* code */
        B b;
        g(); //g() called and exception raised
        h();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return ;
    
}
class UserExp:
public exceptions()
void g()
{
    A a;
    UserExp ex("From g()")
    throw ex;
    return;
}
//Stack frame of g() unwinds
//Remaininh execution of g() and h() is skipped
//Exception caought by the catch clause
//Normal flow continues