GLshort iv1_vertices[] = {6904,-8231,-8289,8221,-8231,-8289,7562,-9875,-9090,6904,-9196,-7392,8221,-9196,-7392,-6904,-8231,-8289,-8221,-8231,-8289,-7562,-9875,-9090,-6904,-9196,-7392,-8221,-9196,-7392,-1573,-13274,-10524,1591,-13274,-10524,-1197,-13813,-10359,-1573,-14602,-7652,-4532,-1319,-8732,-4532,-5129,-489,4550,-1319,-8732,4550,-5129,-489,1591,-14602,-7652,1215,-14825,-8169,1215,-13813,-10359,-1197,-14825,-8169};
const GLubyte iv1_indices[] = {1,2,0,0,2,3,3,2,4,4,2,1,6,7,5,5,7,8,8,7,9,9,7,6,20,10,11,14,11,10,10,21,13,15,10,13,11,17,18,15,18,17,21,18,13,11,19,20,21,20,19,20,12,10,14,16,11,10,12,21,15,14,10,11,16,17,15,13,18,21,19,18,11,18,19,21,12,20};
void register_iv1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, iv1_vertices, sizeof(iv1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, iv1_indices, sizeof(iv1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
