#ifndef s890retdec_H
#define s890retdec_H

#include "w2c2_base.h"

typedef struct s890retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s890retdecInstance;

void f0(s890retdecInstance*);

void f1(s890retdecInstance*);

U32 f2(s890retdecInstance*);

void f3(s890retdecInstance*,U32);

U32 f4(s890retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s890retdecInstance*,U32,U32,U32,U32,U32);

void f6(s890retdecInstance*,U32);

void f7(s890retdecInstance*,U32,U32,U32);

void f8(s890retdecInstance*,U32,U32,U32);

void s890retdec____wasm_call_ctors(s890retdecInstance*i);

void s890retdec____wasm_apply_data_relocs(s890retdecInstance*i);

U32 s890retdec_func_1(s890retdecInstance*i);

void s890retdec_call_cb(s890retdecInstance*i,U32 l0);

void s890retdecInstantiate(s890retdecInstance* instance, void* resolve(const char* module, const char* name));

void s890retdecFreeInstance(s890retdecInstance* instance);

#endif /* s890retdec_H */

