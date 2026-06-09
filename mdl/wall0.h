GLshort wall0_vertices[] = {5762,392,8904,5762,392,-8904,-5762,392,8904,-5762,392,-8904,10641,392,0,-10641,392,-0,-6825,-1312,10546,6825,-1312,10546,12604,-1312,0,6825,-1312,-10546,-6825,-1312,-10546,-12604,-1312,-0,-5289,920,8173,5289,920,8173,9767,920,0,5289,920,-8173,-5289,920,-8173,-9767,920,-0};
const GLubyte wall0_indices[] = {9,11,7,4,7,0,0,14,4,1,10,9,0,6,2,5,10,3,5,6,11,4,9,8,13,17,15,3,15,16,2,13,0,3,17,5,2,17,12,1,14,15,7,8,9,9,10,11,11,6,7,4,8,7,0,13,14,1,3,10,0,7,6,5,11,10,5,2,6,4,1,9,15,14,13,13,12,17,17,16,15,3,1,15,2,12,13,3,16,17,2,5,17,1,4,14};
void register_wall0()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, wall0_vertices, sizeof(wall0_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, wall0_indices, sizeof(wall0_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 96;
    esModelArray_index++;
}
