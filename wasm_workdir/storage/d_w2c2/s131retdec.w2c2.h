#ifndef s131retdec_H
#define s131retdec_H

#include "w2c2_base.h"

typedef struct s131retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s131retdecInstance;

void f0(s131retdecInstance*);

void f1(s131retdecInstance*);

U32 f2(s131retdecInstance*);

void f3(s131retdecInstance*,U32);

U32 f4(s131retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s131retdecInstance*,U32,U32,U32,U32,U32);

void f6(s131retdecInstance*,U32);

void f7(s131retdecInstance*,U32,U32,U32);

void f8(s131retdecInstance*,U32,U32,U32);

void s131retdec____wasm_call_ctors(s131retdecInstance*i);

void s131retdec____wasm_apply_data_relocs(s131retdecInstance*i);

U32 s131retdec_func_1(s131retdecInstance*i);

void s131retdec_call_cb(s131retdecInstance*i,U32 l0);

void s131retdecInstantiate(s131retdecInstance* instance, void* resolve(const char* module, const char* name));

void s131retdecFreeInstance(s131retdecInstance* instance);

#endif /* s131retdec_H */

