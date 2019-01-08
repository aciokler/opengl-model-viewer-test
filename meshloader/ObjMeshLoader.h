//
//  ObjMeshLoaderMilestone1.hpp
//  OpenGLOtherTest
//
//  Created by Abraham-mac on 7/8/16.
//  Copyright © 2016 Abraham-mac. All rights reserved.
//

#ifndef ObjMeshLoader_h
#define ObjMeshLoader_h

#include "MeshLoader.h"

class ObjMeshLoader : public MeshLoader
{
public:
    
    ObjMeshLoader( const GLchar * path )
    {
        loadFromFile( path );
    }
    
    ~ObjMeshLoader()
    {
    }
    
    bool isSplitVertex( const GLuint & index, const GLuint & normalIndex, std::map<GLuint,std::vector<GLuint>*> * normalIndexMap );
    
    void loadFromFile( const GLchar * path );
};

#endif /* ObjMeshLoader_h */
