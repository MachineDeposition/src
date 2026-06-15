GLshort wall1_vertices[] = {8932,392,8904,8932,392,-8904,-4208,392,8904,-4208,392,-8904,-9087,392,-0,-5270,-1312,10546,9995,-1312,10546,9995,-1312,-10546,-5270,-1312,-10546,-11050,-1312,-0,-3734,920,8173,8459,920,8173,8459,920,-8173,-3734,920,-8173,-8213,920,-0};
const GLubyte wall1_indices[] = {5,8,7,1,8,3,5,0,2,8,4,3,4,5,2,6,1,0,12,14,10,3,12,1,11,2,0,14,3,4,2,14,4,12,0,1,7,6,5,5,9,8,1,7,8,5,6,0,8,9,4,4,9,5,6,7,1,10,11,12,12,13,14,3,13,12,11,10,2,14,13,3,2,10,14,12,11,0};
void register_wall1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, wall1_vertices, sizeof(wall1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, wall1_indices, sizeof(wall1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
