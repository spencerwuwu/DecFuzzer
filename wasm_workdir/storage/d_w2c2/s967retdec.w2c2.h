#ifndef s967retdec_H
#define s967retdec_H

#include "w2c2_base.h"

typedef struct s967retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s967retdecInstance;

void f0(s967retdecInstance*);

void f1(s967retdecInstance*);

U32 f2(s967retdecInstance*);

void f3(s967retdecInstance*,U32);

U32 f4(s967retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s967retdecInstance*,U32,U32,U32,U32,U32);

void f6(s967retdecInstance*,U32);

void f7(s967retdecInstance*,U32,U32,U32);

void f8(s967retdecInstance*,U32,U32,U32);

void s967retdec____wasm_call_ctors(s967retdecInstance*i);

void s967retdec____wasm_apply_data_relocs(s967retdecInstance*i);

U32 s967retdec_func_1(s967retdecInstance*i);

void s967retdec_call_cb(s967retdecInstance*i,U32 l0);

void s967retdecInstantiate(s967retdecInstance* instance, void* resolve(const char* module, const char* name));

void s967retdecFreeInstance(s967retdecInstance* instance);

#endif /* s967retdec_H */

