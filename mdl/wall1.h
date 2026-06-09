GLshort wall1_vertices[] = {8932,392,8904,8932,392,-8904,-4208,392,8904,-4208,392,-8904,-9087,392,-0,-5270,-1312,10546,9995,-1312,10546,9995,-1312,-10546,-5270,-1312,-10546,-11050,-1312,-0,-3734,920,8173,8459,920,8173,8459,920,-8173,-3734,920,-8173,-8213,920,-0};
const GLubyte wall1_indices[] = {7,9,5,1,8,7,0,5,2,4,8,3,4,5,9,1,6,0,10,13,12,3,12,13,2,11,0,3,14,4,2,14,10,0,12,1,5,6,7,7,8,9,1,3,8,0,6,5,4,9,8,4,2,5,1,7,6,12,11,10,10,14,13,3,1,12,2,10,11,3,13,14,2,4,14,0,11,12};
void register_wall1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, wall1_vertices, sizeof(wall1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, wall1_indices, sizeof(wall1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
