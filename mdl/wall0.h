GLshort wall0_vertices[] = {5762,392,8904,5762,392,-8904,-5762,392,8904,-5762,392,-8904,10641,392,0,-10641,392,-0,-6825,-1312,10546,6825,-1312,10546,12604,-1312,0,6825,-1312,-10546,-6825,-1312,-10546,-12604,-1312,-0,-5289,920,8173,5289,920,8173,9767,920,0,5289,920,-8173,-5289,920,-8173,-9767,920,-0};
const GLubyte wall0_indices[] = {7,11,9,7,4,0,14,0,4,1,10,3,6,0,2,10,5,3,5,6,2,4,9,1,15,17,13,3,15,1,13,2,0,17,3,5,2,17,5,1,14,4,9,8,7,7,6,11,11,10,9,7,8,4,14,13,0,1,9,10,6,7,0,10,11,5,5,11,6,4,8,9,13,14,15,15,16,17,17,12,13,3,16,15,13,12,2,17,16,3,2,12,17,1,15,14};
void register_wall0()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, wall0_vertices, sizeof(wall0_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, wall0_indices, sizeof(wall0_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 96;
    esModelArray_index++;
}
