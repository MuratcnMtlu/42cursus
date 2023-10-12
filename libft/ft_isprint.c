int ft_isprint(int arg)
{
    if (arg > 31 && arg < 127)
    {
        return  1;
    }
    return  0;
}
