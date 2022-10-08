struct rectangle {
    double width = 0;
    double height = 0;
    double perimeter (){
        return (width + height) * 2;
    }
    double area (){
        return width * height;
    }
}