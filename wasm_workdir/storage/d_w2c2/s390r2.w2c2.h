#ifndef s390r2_H
#define s390r2_H

#include "w2c2_base.h"

typedef struct s390r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s390r2Instance;

void f0(s390r2Instance*);

void f1(s390r2Instance*);

U32 f2(s390r2Instance*);

void f3(s390r2Instance*,U32);

U32 f4(s390r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s390r2Instance*,U32,U32,U32,U32,U32);

void f6(s390r2Instance*,U32);

void f7(s390r2Instance*,U32,U32,U32);

void f8(s390r2Instance*,U32,U32,U32);

void s390r2____wasm_call_ctors(s390r2Instance*i);

void s390r2____wasm_apply_data_relocs(s390r2Instance*i);

U32 s390r2_func_1(s390r2Instance*i);

void s390r2_call_cb(s390r2Instance*i,U32 l0);

void s390r2Instantiate(s390r2Instance* instance, void* resolve(const char* module, const char* name));

void s390r2FreeInstance(s390r2Instance* instance);

#endif /* s390r2_H */

