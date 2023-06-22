#ifndef s523retdec_H
#define s523retdec_H

#include "w2c2_base.h"

typedef struct s523retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s523retdecInstance;

void f0(s523retdecInstance*);

void f1(s523retdecInstance*);

U32 f2(s523retdecInstance*);

void f3(s523retdecInstance*,U32);

U32 f4(s523retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s523retdecInstance*,U32,U32,U32,U32,U32);

void f6(s523retdecInstance*,U32);

void f7(s523retdecInstance*,U32,U32,U32);

void f8(s523retdecInstance*,U32,U32,U32);

void s523retdec____wasm_call_ctors(s523retdecInstance*i);

void s523retdec____wasm_apply_data_relocs(s523retdecInstance*i);

U32 s523retdec_func_1(s523retdecInstance*i);

void s523retdec_call_cb(s523retdecInstance*i,U32 l0);

void s523retdecInstantiate(s523retdecInstance* instance, void* resolve(const char* module, const char* name));

void s523retdecFreeInstance(s523retdecInstance* instance);

#endif /* s523retdec_H */

