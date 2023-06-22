#ifndef s370retdec_H
#define s370retdec_H

#include "w2c2_base.h"

typedef struct s370retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s370retdecInstance;

void f0(s370retdecInstance*);

void f1(s370retdecInstance*);

U32 f2(s370retdecInstance*);

void f3(s370retdecInstance*,U32);

U32 f4(s370retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s370retdecInstance*,U32,U32,U32,U32,U32);

void f6(s370retdecInstance*,U32);

void f7(s370retdecInstance*,U32,U32,U32);

void f8(s370retdecInstance*,U32,U32,U32);

void s370retdec____wasm_call_ctors(s370retdecInstance*i);

void s370retdec____wasm_apply_data_relocs(s370retdecInstance*i);

U32 s370retdec_func_1(s370retdecInstance*i);

void s370retdec_call_cb(s370retdecInstance*i,U32 l0);

void s370retdecInstantiate(s370retdecInstance* instance, void* resolve(const char* module, const char* name));

void s370retdecFreeInstance(s370retdecInstance* instance);

#endif /* s370retdec_H */

