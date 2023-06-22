#ifndef s717retdec_H
#define s717retdec_H

#include "w2c2_base.h"

typedef struct s717retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s717retdecInstance;

void f0(s717retdecInstance*);

void f1(s717retdecInstance*);

U32 f2(s717retdecInstance*);

void f3(s717retdecInstance*,U32);

U32 f4(s717retdecInstance*,U32,U32,U32,U32,U32);

void f5(s717retdecInstance*,U32,U32,U32,U32,U32);

void f6(s717retdecInstance*,U32);

void f7(s717retdecInstance*,U32,U32,U32);

void f8(s717retdecInstance*,U32,U32,U32);

void s717retdec____wasm_call_ctors(s717retdecInstance*i);

void s717retdec____wasm_apply_data_relocs(s717retdecInstance*i);

U32 s717retdec_func_1(s717retdecInstance*i);

void s717retdec_call_cb(s717retdecInstance*i,U32 l0);

void s717retdecInstantiate(s717retdecInstance* instance, void* resolve(const char* module, const char* name));

void s717retdecFreeInstance(s717retdecInstance* instance);

#endif /* s717retdec_H */

