#ifndef s873retdec_H
#define s873retdec_H

#include "w2c2_base.h"

typedef struct s873retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s873retdecInstance;

void f0(s873retdecInstance*);

void f1(s873retdecInstance*);

U32 f2(s873retdecInstance*);

void f3(s873retdecInstance*,U32);

U32 f4(s873retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s873retdecInstance*,U32,U32,U32,U32,U32);

void f6(s873retdecInstance*,U32);

void f7(s873retdecInstance*,U32,U32,U32);

void f8(s873retdecInstance*,U32,U32,U32);

void s873retdec____wasm_call_ctors(s873retdecInstance*i);

void s873retdec____wasm_apply_data_relocs(s873retdecInstance*i);

U32 s873retdec_func_1(s873retdecInstance*i);

void s873retdec_call_cb(s873retdecInstance*i,U32 l0);

void s873retdecInstantiate(s873retdecInstance* instance, void* resolve(const char* module, const char* name));

void s873retdecFreeInstance(s873retdecInstance* instance);

#endif /* s873retdec_H */

