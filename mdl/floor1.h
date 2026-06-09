GLshort floor1_vertices[] = {-8904,3377,832,8904,3377,832,-8904,-607,832,8904,-607,832,0,-5486,832,-10546,-1669,-871,-10546,4798,-871,10546,4798,-871,10546,-1669,-871,-0,-7449,-871,-8173,-133,-861,-8173,2724,-861,8173,2724,-861,8173,-133,-861,-0,-4612,-861,-8173,-133,832,-8173,2724,832,8173,2724,832,8173,-133,832,0,-4612,832};
const GLubyte floor1_indices[] = {1,8,7,0,5,2,4,8,3,4,5,9,0,7,6,3,17,18,2,16,0,3,19,4,2,19,15,1,16,17,17,13,18,15,11,16,18,14,19,19,10,15,16,12,17,14,12,11,1,3,8,0,6,5,4,9,8,4,2,5,0,1,7,3,1,17,2,15,16,3,18,19,2,4,19,1,0,16,17,12,13,15,10,11,18,13,14,19,14,10,16,11,12,11,10,14,14,13,12};
void register_floor1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor1_vertices, sizeof(floor1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor1_indices, sizeof(floor1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 99;
    esModelArray_index++;
}
