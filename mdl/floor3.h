GLshort floor3_vertices[] = {2923,-9653,810,-4161,-5762,810,2923,9653,810,-4161,5762,810,4489,12369,-894,4489,-12369,-894,-5803,-6825,-894,-5803,6825,-894,2126,8256,-749,2126,-8256,-749,-3430,-5289,-883,-3430,5289,-883,2126,8256,810,2126,-8256,810,-3430,-5289,810,-3430,5289,810};
const GLubyte floor3_indices[] = {1,7,6,0,4,2,2,7,3,0,6,5,3,14,15,0,12,13,3,12,2,1,13,14,14,11,15,12,9,13,15,8,12,14,9,10,11,9,8,1,3,7,0,5,4,2,4,7,0,1,6,3,1,14,0,2,12,3,15,12,1,0,13,14,10,11,12,8,9,15,11,8,14,13,9,11,10,9};
void register_floor3()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor3_vertices, sizeof(floor3_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor3_indices, sizeof(floor3_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
