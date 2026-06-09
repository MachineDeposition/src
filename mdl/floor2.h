GLshort floor2_vertices[] = {-3877,-3493,832,3159,-3493,832,-3877,310,832,3159,3722,832,-5519,1373,-871,-5519,-5095,-871,4801,-5095,-871,4801,6939,-871,-3145,-163,-861,-3145,-3559,-861,2427,-3559,-861,2427,2530,-861,-3145,-163,832,-3145,-3020,832,2427,-3020,832,2427,2530,832};
const GLubyte floor2_indices[] = {3,6,1,0,4,2,3,4,7,1,5,0,1,15,3,2,13,0,2,15,12,1,13,14,14,11,15,13,8,9,15,8,12,13,10,14,8,10,9,3,7,6,0,5,4,3,2,4,1,6,5,1,14,15,2,12,13,2,3,15,1,0,13,14,10,11,13,12,8,15,11,8,13,9,10,8,11,10};
void register_floor2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor2_vertices, sizeof(floor2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor2_indices, sizeof(floor2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
