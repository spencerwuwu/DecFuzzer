#ifndef s265retdec_H
#define s265retdec_H

#include "w2c2_base.h"

typedef struct s265retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s265retdecInstance;

void f0(s265retdecInstance*);

void f1(s265retdecInstance*);

U32 f2(s265retdecInstance*);

void f3(s265retdecInstance*,U32);

U32 f4(s265retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s265retdecInstance*,U32,U32,U32,U32,U32);

void f6(s265retdecInstance*,U32);

void f7(s265retdecInstance*,U32,U32,U32);

void f8(s265retdecInstance*,U32,U32,U32);

void s265retdec____wasm_call_ctors(s265retdecInstance*i);

void s265retdec____wasm_apply_data_relocs(s265retdecInstance*i);

U32 s265retdec_func_1(s265retdecInstance*i);

void s265retdec_call_cb(s265retdecInstance*i,U32 l0);

void s265retdecInstantiate(s265retdecInstance* instance, void* resolve(const char* module, const char* name));

void s265retdecFreeInstance(s265retdecInstance* instance);

#endif /* s265retdec_H */

