GLshort wall2_vertices[] = {5762,392,-3518,9935,392,3518,-5762,392,-3518,-9935,392,3518,-6825,-1312,-5160,6825,-1312,-5160,12482,-1312,5160,-12482,-1312,5160,-5289,920,-2786,5289,920,-2786,8559,920,2786,-8559,920,2786};
const GLubyte wall2_indices[] = {5,7,6,5,1,0,10,0,1,1,7,3,4,0,2,3,4,2,11,9,10,3,10,1,9,2,0,2,11,3,5,4,7,5,6,1,10,9,0,1,6,7,4,5,0,3,7,4,11,8,9,3,11,10,9,8,2,2,8,11};
void register_wall2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, wall2_vertices, sizeof(wall2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, wall2_indices, sizeof(wall2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 60;
    esModelArray_index++;
}
