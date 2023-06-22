#ifndef s920retdec_H
#define s920retdec_H

#include "w2c2_base.h"

typedef struct s920retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s920retdecInstance;

void f0(s920retdecInstance*);

void f1(s920retdecInstance*);

U32 f2(s920retdecInstance*);

void f3(s920retdecInstance*,U32);

U32 f4(s920retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s920retdecInstance*,U32,U32,U32,U32,U32);

void f6(s920retdecInstance*,U32);

void f7(s920retdecInstance*,U32,U32,U32);

void f8(s920retdecInstance*,U32,U32,U32);

void s920retdec____wasm_call_ctors(s920retdecInstance*i);

void s920retdec____wasm_apply_data_relocs(s920retdecInstance*i);

U32 s920retdec_func_1(s920retdecInstance*i);

void s920retdec_call_cb(s920retdecInstance*i,U32 l0);

void s920retdecInstantiate(s920retdecInstance* instance, void* resolve(const char* module, const char* name));

void s920retdecFreeInstance(s920retdecInstance* instance);

#endif /* s920retdec_H */

